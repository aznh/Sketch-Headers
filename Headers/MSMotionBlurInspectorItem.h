//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSBaseBlurInspectorItem.h"

@class MSMathInspectorValueAdaptor, MSUpDownTextField, NSSlider;

@interface MSMotionBlurInspectorItem : MSBaseBlurInspectorItem
{
    NSSlider *_angleSlider;
    MSMathInspectorValueAdaptor *_angleAdapter;
    MSUpDownTextField *_angleTextField;
}

@property(retain, nonatomic) MSUpDownTextField *angleTextField; // @synthesize angleTextField=_angleTextField;
@property(retain, nonatomic) MSMathInspectorValueAdaptor *angleAdapter; // @synthesize angleAdapter=_angleAdapter;
@property(retain, nonatomic) NSSlider *angleSlider; // @synthesize angleSlider=_angleSlider;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

