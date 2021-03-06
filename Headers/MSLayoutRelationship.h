//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MSLayoutAnchor;

@interface MSLayoutRelationship : NSObject
{
    MSLayoutAnchor *_firstAnchor;
    id _firstItem;
    unsigned long long _firstAttribute;
    MSLayoutAnchor *_secondAnchor;
    id _secondItem;
    unsigned long long _secondAttribute;
}

+ (id)spacingMeasurementWithItem:(id)arg1 toItem:(id)arg2 onAxis:(unsigned long long)arg3;
+ (id)dimensionMeasurementWithItem:(id)arg1 axis:(unsigned long long)arg2;
@property(readonly, nonatomic) unsigned long long secondAttribute; // @synthesize secondAttribute=_secondAttribute;
@property(readonly, nonatomic) id secondItem; // @synthesize secondItem=_secondItem;
@property(readonly, nonatomic) MSLayoutAnchor *secondAnchor; // @synthesize secondAnchor=_secondAnchor;
@property(readonly, nonatomic) unsigned long long firstAttribute; // @synthesize firstAttribute=_firstAttribute;
@property(readonly, nonatomic) id firstItem; // @synthesize firstItem=_firstItem;
@property(readonly, nonatomic) MSLayoutAnchor *firstAnchor; // @synthesize firstAnchor=_firstAnchor;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) struct CGRect rect;
- (id)initWithFirstItem:(id)arg1 attribute:(unsigned long long)arg2 secondAnchor:(id)arg3;
- (id)initWithItem:(id)arg1 attribute:(unsigned long long)arg2 item:(id)arg3 attribute:(unsigned long long)arg4;
- (id)initWithAnchor:(id)arg1 anchor:(id)arg2;

@end

