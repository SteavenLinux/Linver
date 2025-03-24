#include "clickableqlabel.h"

ClickableQLabel::ClickableQLabel(QWidget* parent, Qt::WindowFlags f)
    : QLabel(parent) {
    Q_UNUSED(f);
}

ClickableQLabel::~ClickableQLabel() {}

void ClickableQLabel::mousePressEvent(QMouseEvent* event) {
    Q_UNUSED(event);
    emit clicked();
}
