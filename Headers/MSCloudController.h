//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MSCloudShareUploadControllerDelegate.h"

@class MSCloudShare, MSCloudShareAPI, MSCloudShareUploadController, MSDocument, NSString;

@interface MSCloudController : NSObject <MSCloudShareUploadControllerDelegate>
{
    MSDocument *_document;
    NSString *_password;
    MSCloudShareAPI *_api;
    double _uploadProgress;
    double _uploadStartTime;
    MSCloudShareUploadController *_currentUploadController;
}

+ (void)openRemoteEndpoint:(id)arg1 parameters:(id)arg2;
+ (void)openRemoteSignUp;
+ (void)openRemoteSignIn;
+ (void)openRemoteFileOverview;
+ (void)openRemoteAccountSettings;
+ (void)showPreferences;
+ (id)baseURL;
@property(retain, nonatomic) MSCloudShareUploadController *currentUploadController; // @synthesize currentUploadController=_currentUploadController;
@property(nonatomic) double uploadStartTime; // @synthesize uploadStartTime=_uploadStartTime;
@property(nonatomic) double uploadProgress; // @synthesize uploadProgress=_uploadProgress;
@property(retain, nonatomic) MSCloudShareAPI *api; // @synthesize api=_api;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(nonatomic) __weak MSDocument *document; // @synthesize document=_document;
- (void).cxx_destruct;
- (void)cloudShareController:(id)arg1 willUploadShareAsNew:(BOOL)arg2;
- (void)cloudShareController:(id)arg1 didChangeProgress:(double)arg2;
- (void)cloudShareController:(id)arg1 uploadDidFailWithError:(id)arg2;
- (void)cloudShareController:(id)arg1 didUploadShare:(id)arg2;
- (void)presentDocumentDidProcessNotification;
- (void)checkShareProcessStatusAfterDelay:(double)arg1;
- (void)cancelUpload;
- (void)startUpload;
@property(readonly, nonatomic) BOOL uploadIncludesDocumentData;
@property(readonly, nonatomic, getter=isUploading) BOOL uploading;
- (void)updateShareWithHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) BOOL uploadedByCurrentUser;
@property(readonly, nonatomic) BOOL uploaded;
- (void)resetCloudShare;
@property(readonly, nonatomic) MSCloudShare *share;
@property(readonly, nonatomic) BOOL canUpload;
- (void)userDidChangeNotification:(id)arg1;
- (void)updateUserAccount;
- (void)dealloc;
- (id)initWithDocument:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

