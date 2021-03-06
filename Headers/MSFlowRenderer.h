//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSOverlayRenderer.h"

@class NSArray, NSBezierPath;

@interface MSFlowRenderer : MSOverlayRenderer
{
    BOOL _shouldDrawSourceLayerBounds;
    NSArray *_flowInfluencingLayerIDs;
    unsigned long long _flowType;
    NSBezierPath *_flowPath;
    NSBezierPath *_flowClipPath;
    struct CGRect _sourceLayerBounds;
}

@property(retain, nonatomic) NSBezierPath *flowClipPath; // @synthesize flowClipPath=_flowClipPath;
@property(retain, nonatomic) NSBezierPath *flowPath; // @synthesize flowPath=_flowPath;
@property(nonatomic) unsigned long long flowType; // @synthesize flowType=_flowType;
@property(nonatomic) struct CGRect sourceLayerBounds; // @synthesize sourceLayerBounds=_sourceLayerBounds;
@property(nonatomic) BOOL shouldDrawSourceLayerBounds; // @synthesize shouldDrawSourceLayerBounds=_shouldDrawSourceLayerBounds;
@property(copy, nonatomic) NSArray *flowInfluencingLayerIDs; // @synthesize flowInfluencingLayerIDs=_flowInfluencingLayerIDs;
- (void).cxx_destruct;
- (void)drawDotInContext:(id)arg1;
- (void)drawTipInContext:(id)arg1;
- (void)drawLineAndTipInContext:(id)arg1;
- (void)drawRect:(struct CGRect)arg1 context:(id)arg2 selectedLayerIDs:(id)arg3;

@end

