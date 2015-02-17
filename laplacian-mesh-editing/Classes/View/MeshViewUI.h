// generated by Fast Light User Interface Designer (fluid) version 1.0303

#ifndef MeshViewUI_h
#define MeshViewUI_h
#include <FL/Fl.H>
#include <FL/Fl_Double_Window.H>
#include <FL/Fl_Group.H>
#include <FL/Fl_Roller.H>
#include <FL/Fl_Slider.H>
#include "MeshView.h"
#include <FL/Fl_Value_Slider.H>

class MeshViewUI {
public:
  MeshViewUI();
  Fl_Double_Window *mContainer;
  Fl_Group *mFl_Group;
  Fl_Group *VChange;
  Fl_Roller *vrot;
  Fl_Slider *ypan;
  Fl_Group *HChange;
  Fl_Slider *xpan;
  Fl_Roller *hrot;
  Fl_Group *MainView;
  MeshView *meshView;
  Fl_Value_Slider *zoomSlider;
private:
  inline void cb_zoomSlider_i(Fl_Value_Slider*, void*);
  static void cb_zoomSlider(Fl_Value_Slider*, void*);
public:
  void show();
};
#endif