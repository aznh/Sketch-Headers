//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSImageView.h>

@class NSImage;

@interface MSImageOverrideView : NSImageView
{
    NSImage *_placeholderImage;
}

+ (Class)cellClass;
@property(retain, nonatomic) NSImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
@property(readonly, nonatomic) BOOL displaysPlaceholder;
- (void)removeOverrideImage:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

