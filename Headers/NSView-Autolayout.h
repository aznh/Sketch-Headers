//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@interface NSView (Autolayout)
- (id)widthConstraint;
- (id)constraintsWithView:(id)arg1 attributeMatcher:(CDUnknownBlockType)arg2;
- (id)verticalConstraintsWithView:(id)arg1;
- (id)verticalConstraintWithView:(id)arg1;
- (id)horizontalConstraintsWithView:(id)arg1;
- (id)horizontalConstraintWithView:(id)arg1;
- (void)showWithWidth:(double)arg1;
- (void)showWithHeight:(double)arg1;
- (void)hideWithZeroWidth;
- (void)hideWithZeroHeight;
- (id)heightConstraint;
- (void)constrainWidth:(double)arg1 priority:(float)arg2;
- (void)constrainWidth:(double)arg1;
- (void)constrainHeight:(double)arg1 priority:(float)arg2;
- (void)constrainHeight:(double)arg1;
- (void)addSubview:(id)arg1 constrainedBy:(struct NSEdgeInsets)arg2 priority:(float)arg3;
- (id)constraintWithSelfAsFirstItemBoundToAttribute:(long long)arg1;
@end

