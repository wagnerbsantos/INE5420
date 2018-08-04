#ifndef MAIN_WINDOW_H
#define MAIN_WINDOW_H

#include <gtkmm/button.h>
#include <gtkmm/paned.h>
#include <gtkmm/box.h>
#include <gtkmm/frame.h>
#include <gtkmm/window.h>

#include "button_box.h"
#include "canvas.h"

class MainWindow : public Gtk::Window {

    public:
        MainWindow();
        virtual ~MainWindow();

    protected:
        Gtk::Paned   main_pane;
        Gtk::Box     b_menu, b_view;
        Gtk::Frame   f_objects, f_window_menu, f_view, f_log;
        Gtk::Box     bt_box;

};

#endif // MAIN_WINDOW_H
