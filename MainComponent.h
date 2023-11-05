#ifndef __MAINCOMPONENT_H__
#define __MAINCOMPONENT_H__

#include <JuceHeader.h>

class MainComponent : public juce::Component,
                      public juce::Button::Listener
{
public:
    MainComponent();
    //~MainComponent();
    
    void resized();
    void buttonClicked(juce::Button* button);


private:
    juce::OwnedArray<juce::Button> buttons;
    juce::Label label;
};

#endif










//#pragma once
//
//#include <JuceHeader.h>
//
////==============================================================================
///*
//    This component lives inside our window, and this is where you should put all
//    your controls and content.
//*/
//class MainComponent  : public juce::Component
//{
//public:
//    //==============================================================================
//    MainComponent();
//    ~MainComponent() override;
//
//    //==============================================================================
//    void paint (juce::Graphics&) override;
//    void resized() override;
//
//private:
//    //==============================================================================
//    // Your private member variables go here...
//
//
//    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainComponent)
//};
