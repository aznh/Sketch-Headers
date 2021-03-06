//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSMultipleColorStylePartInspectorViewController.h"

#import "BCPopoverDelegate-Protocol.h"

@class MSBorderOptionsInspectorViewController, MSTextLabelForUpDownField, NSButton, NSString;

@interface MSMultipleBorderInspectorViewController : MSMultipleColorStylePartInspectorViewController <BCPopoverDelegate>
{
    MSBorderOptionsInspectorViewController *_borderOptionsController;
    MSTextLabelForUpDownField *_thicknessLabel;
    NSButton *_addStylePartButton;
}

@property(retain, nonatomic) NSButton *addStylePartButton; // @synthesize addStylePartButton=_addStylePartButton;
@property(retain, nonatomic) MSTextLabelForUpDownField *thicknessLabel; // @synthesize thicknessLabel=_thicknessLabel;
@property(readonly, nonatomic) MSBorderOptionsInspectorViewController *borderOptionsController; // @synthesize borderOptionsController=_borderOptionsController;
- (void).cxx_destruct;
- (void)dealloc;
- (id)views;
- (id)inspectorForStyleParts:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)loadViewControllers;
- (BOOL)advancedOptionsApplicable;
- (BOOL)shouldShowAdvancedOptionsButton;
- (BOOL)shouldHideAddStylePartButton;
- (void)styleDidEnableOrDisable;
- (void)showAdvancedOptionsAction:(id)arg1;
- (void)prepare;
- (unsigned long long)stylePartType;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

