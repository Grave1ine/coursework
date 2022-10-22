//
// Created by Dmitry Morozov on 23/10/22.
//

#include "Drawable_Rect.hpp"

#include <fstream>


DrawableRect::DrawableRect(int y, int x, const std::string &_texture_file) : Drawable(y, x) {

    const auto [h, w] = _loadTexture(_texture_file);

    _height = h;
    _width = w;

}

std::pair<int, int> DrawableRect::_loadTexture(const std::string &file_name) {

    std::ifstream texture_file(file_name);
    if (!texture_file.is_open()) {
        throw std::runtime_error("Can't open texture file " + file_name);
    }
    //Fill texture vector
    std::string line;
    while (std::getline(texture_file, line)) {
        _rect_icon.push_back(line);
    }

    _height = static_cast<int>(_rect_icon.size());

    //set max width
    for (auto &item: _rect_icon) {
        if (item.size() > _width) {
            _width = static_cast<int>(item.size());
        }
    }

    return std::make_pair(_height, _width);
}


void DrawableRect::mvAdd(WINDOW *) {

    auto y = getY();
    auto x = getX();

    for (const auto &line: _rect_icon) {
        mvprintw(y, x, line.c_str());
        y++;
    }

}


