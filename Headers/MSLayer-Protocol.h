//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MSPath, NSAffineTransform, NSArray, NSString;

@protocol MSLayer <NSObject>
@property(readonly, nonatomic) BOOL isLayerExportable;
@property(readonly, nonatomic) struct CGPoint origin;
@property(readonly, nonatomic) struct BCEdgePaddings influenceRectEdgePaddingsThatCascadeToContainedLayers;
@property(readonly, nonatomic) struct CGAffineTransform CGTransformForFrame;
@property(readonly, nonatomic) BOOL hasTransforms;
@property(readonly, nonatomic) struct CGRect bounds;
@property(readonly, nonatomic) struct CGRect rect;
@property(readonly, nonatomic) MSPath *pathInFrameWithTransforms;
@property(readonly, nonatomic) MSPath *pathInFrame;
@property(readonly, nonatomic) MSPath *pathInBounds;
@property(readonly, nonatomic) NSString *objectID;
@property(readonly, nonatomic) double rotation;
@property(readonly, nonatomic) BOOL isFlippedVertical;
@property(readonly, nonatomic) BOOL isFlippedHorizontal;
- (NSArray *)childrenIncludingSelf:(BOOL)arg1;
- (NSArray *)children;
- (id)layerWithID:(NSString *)arg1;
- (NSAffineTransform *)transformForRect:(struct CGRect)arg1;
@end

