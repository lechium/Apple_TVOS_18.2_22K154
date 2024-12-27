//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString, NSURL;

@interface SagaUploadPlaylistArtworkOperation
{
    long long _playlistPersistentID;	// 8 = 0x8
    NSNumber *_dsid;	// 16 = 0x10
    NSString *_cuid;	// 24 = 0x18
    NSString *_troveID;	// 32 = 0x20
    NSString *_userArtworkToken;	// 40 = 0x28
    NSNumber *_containerCloudID;	// 48 = 0x30
    NSURL *_assetURL;	// 56 = 0x38
    unsigned long long _assetFileSize;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0040000000107a0e
- (void).cxx_destruct;	// IMP=0x0020000000104c9b
@property(nonatomic) unsigned long long assetFileSize; // @synthesize assetFileSize=_assetFileSize;
@property(retain, nonatomic) NSURL *assetURL; // @synthesize assetURL=_assetURL;
@property(retain, nonatomic) NSNumber *containerCloudID; // @synthesize containerCloudID=_containerCloudID;
@property(retain, nonatomic) NSString *userArtworkToken; // @synthesize userArtworkToken=_userArtworkToken;
@property(retain, nonatomic) NSString *troveID; // @synthesize troveID=_troveID;
@property(retain, nonatomic) NSString *cuid; // @synthesize cuid=_cuid;
@property(retain, nonatomic) NSNumber *dsid; // @synthesize dsid=_dsid;
@property(nonatomic) long long playlistPersistentID; // @synthesize playlistPersistentID=_playlistPersistentID;
- (id)_bodyDataWithAdditionalBodyFields:(id)arg1;	// IMP=0x00100000001048c4
- (id)_requestWithURL:(id)arg1 URLBagKey:(id)arg2 timeoutInterval:(double)arg3 additionalBodyFields:(id)arg4;	// IMP=0x0010000000104440
- (id)_standardBodyDictionaryWithAdditionalFields:(id)arg1;	// IMP=0x0010000000104381
- (id)_responseBodyForRequest:(id)arg1 retryTimeout:(double)arg2 debugName:(id)arg3;	// IMP=0x00100000001040c4
- (void)_uploadArtworkAssetWithInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000010368d
- (void)_uploadArtworkAssetWithInfo:(id)arg1 uploadResponsesURL:(id)arg2 uploadResponseData:(id)arg3 postUploadBackOffDelay:(unsigned int)arg4 followupDownloadRequestsURL:(id)arg5;	// IMP=0x001000000010278b
- (void)_downloadRequestsFromURL:(id)arg1 uploadResponsesURL:(id)arg2;	// IMP=0x0010000000101ed1
- (void)_initiateArtworkUpload;	// IMP=0x0010000000101c3b
- (void)main;	// IMP=0x0010000000100e76
- (_Bool)isPersistent;	// IMP=0x0010000000100e6e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000100df1
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000100d77
- (id)initWithConfiguration:(id)arg1 clientIdentity:(id)arg2 playlistPersistentID:(long long)arg3;	// IMP=0x0010000000100d33
- (id)initWithClientIdentity:(id)arg1 playlistPersistentID:(long long)arg2;	// IMP=0x0010000000100cc9

@end

