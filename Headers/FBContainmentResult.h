//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBBezierContour, FBBezierCurve, FBBezierGraph, NSArray;

@interface FBContainmentResult : NSObject
{
    BOOL _containerDetermined;
    int _evenOdd;
    int _nonZero;
    FBBezierCurve *_testEdge;
    NSArray *_intersections;
    FBBezierContour *_testContour;
    FBBezierGraph *_graph;
    FBBezierContour *_container;
}

@property(retain, nonatomic) FBBezierContour *container; // @synthesize container=_container;
@property(nonatomic) BOOL containerDetermined; // @synthesize containerDetermined=_containerDetermined;
@property(readonly, nonatomic) FBBezierGraph *graph; // @synthesize graph=_graph;
@property(readonly, nonatomic) FBBezierContour *testContour; // @synthesize testContour=_testContour;
@property(readonly, copy, nonatomic) NSArray *intersections; // @synthesize intersections=_intersections;
@property(readonly, nonatomic) FBBezierCurve *testEdge; // @synthesize testEdge=_testEdge;
@property(readonly, nonatomic) int nonZero; // @synthesize nonZero=_nonZero;
@property(readonly, nonatomic) int evenOdd; // @synthesize evenOdd=_evenOdd;
- (void).cxx_destruct;
- (id)debugQuickLookObject;
- (id)initWithTestContour:(id)arg1 inGraph:(id)arg2 evenOddInside:(int)arg3 nonZeroInside:(int)arg4 testEdge:(id)arg5 intersections:(id)arg6;

@end

