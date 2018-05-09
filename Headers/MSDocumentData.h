//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_MSDocumentData.h"

#import "MSDocumentData.h"
#import "MSLayerContainment.h"

@class BCCache, MSFontList, MSPage, NSArray, NSDictionary;

@interface MSDocumentData : _MSDocumentData <MSLayerContainment, MSDocumentData>
{
    BOOL _autoExpandGroupsInLayerList;
    NSDictionary *_symbolMap;
    NSDictionary *_symbolInstancesBySymbolID;
    BCCache *_cache;
    id <MSDocumentDataDelegate> _delegate;
    NSDictionary *_metadata;
    MSFontList *_fontList;
}

+ (void)initialize;
@property(retain, nonatomic) MSFontList *fontList; // @synthesize fontList=_fontList;
@property(retain, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(nonatomic) BOOL autoExpandGroupsInLayerList; // @synthesize autoExpandGroupsInLayerList=_autoExpandGroupsInLayerList;
@property(nonatomic) __weak id <MSDocumentDataDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) BCCache *cache; // @synthesize cache=_cache;
- (void).cxx_destruct;
- (void)determineCurrentArtboard;
- (void)refreshOverlay;
- (void)refreshOverlayInRect:(struct CGRect)arg1;
- (void)immediatelyShowSelectionForAllLayers;
- (void)temporarilyHideSelectionForLayers:(id)arg1;
- (void)replaceExistingCreationMetadata;
- (id)images;
- (id)sharedObjectContainerOfType:(unsigned long long)arg1;
- (void)purgeForeignObjects;
- (void)purgeForeignStyles;
- (void)purgeForeignSymbols;
- (id)symbolsReferencedBySymbolInstances;
- (id)symbolsReferencedBySymbolMasters;
- (id)symbolsReferencedByInstances:(id)arg1;
- (void)enumerateForeignObjects:(id)arg1 withLibraries:(id)arg2 block:(CDUnknownBlockType)arg3;
- (id)libraryForForeignObject:(id)arg1 inLibraries:(id)arg2;
- (id)addCopyOfInstanceMasterToDocumentIfNecessary:(id)arg1;
- (void)addSymbolMaster:(id)arg1;
- (id)addCopyOfMasterToDocumentIfNecessary:(id)arg1;
- (id)symbolWithID:(id)arg1;
@property(readonly, nonatomic) NSDictionary *symbolMap; // @synthesize symbolMap=_symbolMap;
- (id)allForeignObjects;
- (id)allSymbols;
- (id)localSymbols;
- (id)allArtboards;
@property(readonly, nonatomic) NSDictionary *symbolInstancesBySymbolID; // @synthesize symbolInstancesBySymbolID=_symbolInstancesBySymbolID;
- (void)populateDictionary:(id)arg1 withChildrenOf:(id)arg2;
- (id)layersByObjectID;
- (id)artboardWithID:(id)arg1;
- (id)layerWithID:(id)arg1;
- (void)layerTreeLayoutDidChange;
- (void)layerSelectionMightHaveChanged;
- (id)selectedLayers;
- (BOOL)documentIsEmpty;
- (void)sharedObjectDidChange:(struct MSModelObject *)arg1;
- (id)nameForNewPage;
- (id)symbolsPageOrCreateIfNecessary;
- (id)symbolsPage;
- (id)addBlankPage;
- (void)removePages:(id)arg1 detachInstances:(BOOL)arg2;
@property(retain, nonatomic) MSPage *currentPage;
- (void)setCurrentPageIndex:(unsigned long long)arg1;
- (void)dealloc;
- (id)documentData;
- (void)copyPropertiesToObject:(id)arg1 options:(unsigned long long)arg2;
- (void)objectDidInit;
- (void)performInitEmptyObject;
- (void)performInitWithImmutableModelObject:(id)arg1;
- (id)defaultPagesArray;
- (void)object:(id)arg1 didChangeProperty:(id)arg2;
- (void)convertToColorSpace:(unsigned long long)arg1;
- (void)assignColorSpace:(unsigned long long)arg1;
- (void)replaceInstancesOfColor:(id)arg1 withColor:(id)arg2 ignoreAlphaWhenMatching:(BOOL)arg3 replaceAlphaOfOriginalColor:(BOOL)arg4;
- (void)enumerateColorConvertiblesIgnoringForeignSymbols:(CDUnknownBlockType)arg1;
- (void)replaceFonts:(id)arg1;
- (void)invalidateFonts;
- (BOOL)enumerateLayersWithOptions:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)enumerateLayers:(CDUnknownBlockType)arg1;
- (id)lastLayer;
- (id)firstLayer;
- (BOOL)canContainLayer:(id)arg1;
- (unsigned long long)indexOfLayer:(id)arg1;
- (id)layerAtIndex:(unsigned long long)arg1;
- (BOOL)containsNoOrOneLayers;
- (BOOL)containsLayers;
- (BOOL)containsMultipleLayers;
- (BOOL)containsOneLayer;
- (unsigned long long)containedLayersCount;
- (id)containedLayers;
- (BOOL)canBeContainedByDocument;
- (BOOL)canBeContainedByGroup;
- (id)metadataForKey:(id)arg1 object:(id)arg2;
- (void)storeMetadata:(id)arg1 forKey:(id)arg2 object:(id)arg3;
- (id)UIMetadataKey;

// Remaining properties
@property(readonly, nonatomic) NSArray *pages;

@end

