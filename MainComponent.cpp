#include "MainComponent.h"

MainComponent::MainComponent()
{
    for (int i = 0; i < 10; ++i)
    {
        juce::String buttonName;
        buttonName << "Button " << juce::String (i);
        juce::TextButton* button = new juce::TextButton (buttonName);
        button->addListener(this);
        buttons.add (button);
        addAndMakeVisible (button);
    }
    
    addAndMakeVisible(&label);
    label.setJustificationType(juce::Justification::centred);
    label.setText ("no buttons clicked", juce::dontSendNotification);
    
    setSize (500, 400);
}

void MainComponent::resized()
{
    juce::Rectangle<int> rect (10, 10, getWidth() / 2 - 20, getHeight() - 20);
    
    int buttonHeight = rect.getHeight() / buttons.size();
    
    for (int i = 0; i < buttons.size(); ++i) {
        buttons[i] ->setBounds (rect.getX(), i * buttonHeight + rect.getY(),
                                rect.getWidth(), buttonHeight);
    }
    
    label.setBounds(rect.getRight(),
                    rect.getY(),
                    getWidth() - rect.getWidth() - 10,
                    20);
}

void MainComponent::buttonClicked (juce::Button* button)
{
 juce::String labelText;
    int buttonIndex = buttons.indexOf (button);
    labelText << "Button clicked: " << juce::String (buttonIndex);
    label.setText (labelText, juce::dontSendNotification);
}

