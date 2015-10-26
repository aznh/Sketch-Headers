#import "NSBezierPath.h"

@interface NSBezierPath (NSBezierPath_Slopes)
- (id)bezierPathByRearrangingSubPathsIfNecessary;
- (id)bezierPathByReplacingElementAtIndexWithMoveTo:(long long)arg1;
- (id)bezierPathByReplacingClosePathByLineToComponents;
- (id)bezierPathByRemovingSubsequentMoveToComponents;
- (id)bezierPathByReplacingMoveToByLineToComponents;
- (id)bezierPathByApplyingModifierBlock:(CDUnknownBlockType)arg1;
- (id)subDivideAtPoint:(struct CGPoint)arg1;
- (void)drawDebugWithZoom:(double)arg1;
- (id)bezierPathBySmootheningSubPath:(double)arg1;
- (struct CGPoint)pointAtIndex:(long long)arg1;
- (void)appendBezierPathByRemovingMoveToPoint:(id)arg1;
- (id)bezierPathByJoiningWithBezierPath:(id)arg1;
- (id)bezierPathByTranslatingXBy:(double)arg1 yBy:(double)arg2;
- (BOOL)isEqualToBezierPath:(id)arg1;
- (id)placeOnBezierPath:(id)arg1 atOffset:(long long)arg2;
- (double)lengthWithMaximumError:(double)arg1;
- (double)length;
- (id)bezierPathByTrimmingToLength:(double)arg1 withMaximumError:(double)arg2;
- (id)expandPathBy:(double)arg1;
- (id)bezierPathByTrimmingToLength:(double)arg1;
- (id)bezierPathFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (id)bezierPathByTrimmingFromLength:(double)arg1 withMaximumError:(double)arg2;
- (id)bezierPathByTrimmingFromLength:(double)arg1;
- (double)slopeOfPointAtIndex:(long long)arg1;
- (struct CGPoint)pointOnPathAtLength:(double)arg1 slope:(double *)arg2;
- (struct CGPoint)pointOnPathAtLength:(double)arg1;
- (double)slopeOnPathAtLength:(double)arg1;
- (struct CGPoint)firstPoint;
- (struct CGPoint)lastPoint;
@end
