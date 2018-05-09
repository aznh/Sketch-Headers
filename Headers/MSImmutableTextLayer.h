//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_MSImmutableTextLayer.h"

#import "MSColorUser.h"
#import "MSFirstLineTypesetterDelegate.h"
#import "NSLayoutManagerDelegate.h"

@class MSTextLayout, NSAttributedString, NSObject, NSString, NSValue;

@interface MSImmutableTextLayer : _MSImmutableTextLayer <MSColorUser, NSLayoutManagerDelegate, MSFirstLineTypesetterDelegate>
{
    NSObject *_calculateTextLayoutAtomicity;
    BOOL _isEditingText;
    MSTextLayout *_textLayout;
    NSValue *_transientGlyphBoundsValue;
}

+ (unsigned long long)traitsForPropertyName:(id)arg1;
+ (unsigned long long)traits;
+ (id)defaultName;
@property(readonly, nonatomic) BOOL isEditingText; // @synthesize isEditingText=_isEditingText;
@property(retain, nonatomic) NSValue *transientGlyphBoundsValue; // @synthesize transientGlyphBoundsValue=_transientGlyphBoundsValue;
- (void).cxx_destruct;
- (id)calculatePathInBounds;
- (double)baselineAdjustmentForLayoutManager:(id)arg1;
- (id)createTextStorage;
- (id)keysDifferingFromObject:(id)arg1;
- (BOOL)isEqualForDiffToObject:(id)arg1;
- (BOOL)hasDefaultValues;
@property(readonly, nonatomic) MSTextLayout *textLayout; // @synthesize textLayout=_textLayout;
- (double)lineHeight;
@property(readonly, copy, nonatomic) NSString *stringValue;
@property(readonly, copy, nonatomic) NSAttributedString *attributedStringValue;
- (double)defaultLineHeight:(id)arg1;
- (id)font;
@property(readonly, nonatomic) double fontSize;
@property(readonly, nonatomic) unsigned long long textAlignment;
- (id)usedFontNames;
- (double)startingPositionOnPath:(id)arg1;
- (id)bezierPathFromGlyphsInBoundsWithParentGroup:(id)arg1 layoutManager:(id)arg2;
- (id)firstUnderlyingShapePathWithParentGroup:(id)arg1;
- (id)shapeToUseForTextOnPathWithParentGroup:(id)arg1;
@property(readonly, nonatomic) BOOL shouldUseBezierRepresentationForRendering;
@property(readonly, nonatomic) struct CGRect capHeightBounds;
@property(readonly, nonatomic) struct CGPoint drawingPointForText;
- (struct CGSize)textContainerSize;
- (double)totalHeightOfFont:(id)arg1;
- (struct CGRect)calculateInfluenceRectForBounds;
- (void)performInitWithUnarchiver:(id)arg1;
- (void)performInitWithMutableModelObject:(id)arg1;
- (Class)overrideViewControllerClassForOverridePoint:(id)arg1;
- (id)overridePointsWithParent:(id)arg1;
- (void)updateColorCounter:(id)arg1;
- (void)migratePropertiesFromV97OrEarlierWithUnarchiver:(id)arg1;
- (void)migratePropertiesFromV80OrEarlierWithUnarchiver:(id)arg1;
- (void)migratePropertiesFromV77OrEarlierWithUnarchiver:(id)arg1;
- (void)migratePropertiesFromV76OrEarlierWithUnarchiver:(id)arg1;
- (void)migratePropertiesFromV44OrEarlierWithUnarchiver:(id)arg1;
- (void)trackColors:(id)arg1;
- (id)textStoragePoolInCache:(id)arg1;
- (BOOL)shouldSkipDrawingInContext:(id)arg1;
- (BOOL)shouldRenderInTransparencyLayer;
- (void)addDefaultFillAttributes:(id)arg1 exporter:(id)arg2;
- (id)addContentToElement:(id)arg1 attributes:(id)arg2 exporter:(id)arg3;
- (void)addPathDefinitionToDocument:(id)arg1;
- (void)addContentToTextElement:(id)arg1 exporter:(id)arg2 textStorage:(id)arg3;
- (struct CGPoint)originForCharacterAttributes:(id)arg1 exporter:(id)arg2 layoutManager:(id)arg3;
- (id)elementForSpan:(id)arg1 origin:(struct CGPoint)arg2 exporter:(id)arg3 text:(id)arg4;
- (id)spanInfoForRun:(struct _NSRange)arg1 charAttributes:(id)arg2 text:(id)arg3 layoutManager:(id)arg4;
- (void)addSVGAttributes:(id)arg1 forCharacterAttributes:(id)arg2 exporter:(id)arg3;
- (void)appendBaseTranslation:(id)arg1 exporter:(id)arg2;
- (id)svgStyle:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

