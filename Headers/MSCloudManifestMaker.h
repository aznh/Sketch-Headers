//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSManifestMaker.h"

@interface MSCloudManifestMaker : MSManifestMaker
{
    CDUnknownBlockType _imageFileProviderBlock;
}

@property(copy, nonatomic) CDUnknownBlockType imageFileProviderBlock; // @synthesize imageFileProviderBlock=_imageFileProviderBlock;
- (void).cxx_destruct;
- (id)fileMetadataForRoot:(id)arg1 onPage:(id)arg2 id:(id)arg3 exportScale:(double)arg4 manifestScale:(double)arg5;
- (id)filesMetadataForRootLayer:(id)arg1 onPage:(id)arg2 id:(id)arg3;
- (id)metadataForRootLayer:(id)arg1 onPage:(id)arg2 earlierSlugs:(id)arg3;
- (id)createManifest;

@end

