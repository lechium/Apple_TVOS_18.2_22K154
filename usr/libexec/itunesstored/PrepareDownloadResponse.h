//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DownloadDataConsumer, DownloadHandle, NSArray, NSDictionary, NSError, NSNumber, NSString, NSURLRequest;

@interface PrepareDownloadResponse : NSObject
{
    long long _automaticType;	// 8 = 0x8
    NSDictionary *_AVAssetDownloadSessionOptions;	// 16 = 0x10
    NSArray *_backgroundOperations;	// 24 = 0x18
    NSString *_bundleIdentifier;	// 32 = 0x20
    long long _bytesPerSecondLimit;	// 40 = 0x28
    NSString *_clientIdentifier;	// 48 = 0x30
    NSString *_clientSecondaryIdentifier;	// 56 = 0x38
    DownloadDataConsumer *_dataConsumer;	// 64 = 0x40
    NSString *_destinationPath;	// 72 = 0x48
    _Bool _discretionary;	// 80 = 0x50
    long long _downloadIdentifier;	// 88 = 0x58
    NSError *_error;	// 96 = 0x60
    _Bool _ignoresDownloadHandler;	// 104 = 0x68
    _Bool _isHLS;	// 105 = 0x69
    NSString *_kind;	// 112 = 0x70
    _Bool _legacyClient;	// 120 = 0x78
    NSNumber *_loadingPriority;	// 128 = 0x80
    long long _mediaAssetIdentifier;	// 136 = 0x88
    long long _mediaAssetSize;	// 144 = 0x90
    _Bool _requiresDownloadHandler;	// 152 = 0x98
    _Bool _requiresPowerPluggedIn;	// 153 = 0x99
    long long _result;	// 160 = 0xa0
    long long rentalIdentifier;	// 168 = 0xa8
    long long _storeItemIdentifier;	// 176 = 0xb0
    long long _taskPriority;	// 184 = 0xb8
    NSNumber *_taskIdentifier;	// 192 = 0xc0
    double _timeoutIntervalForResource;	// 200 = 0xc8
    double _timeoutIntervalForRequest;	// 208 = 0xd0
    NSString *_title;	// 216 = 0xd8
    double _transferProgressFraction;	// 224 = 0xe0
    NSURLRequest *_URLRequest;	// 232 = 0xe8
    unsigned long long _numAudioSelectionsToBeDownloaded;	// 240 = 0xf0
    unsigned long long _numSubtitleSelectionsToBeDownloaded;	// 248 = 0xf8
    _Bool _infersDiscretionary;	// 256 = 0x100
    _Bool _cellularAllowed;	// 257 = 0x101
    _Bool _restore;	// 258 = 0x102
    _Bool _isPerDeviceVPP;	// 259 = 0x103
    _Bool _hasHDR;	// 260 = 0x104
    _Bool _has4K;	// 261 = 0x105
    DownloadHandle *_downloadHandle;	// 264 = 0x108
    NSNumber *_downloadRestoreState;	// 272 = 0x110
}

- (void).cxx_destruct;	// IMP=0x002000000016d06d
@property(nonatomic) _Bool has4K; // @synthesize has4K=_has4K;
@property(nonatomic) _Bool hasHDR; // @synthesize hasHDR=_hasHDR;
@property(copy, nonatomic) NSString *destinationPath; // @synthesize destinationPath=_destinationPath;
@property(nonatomic) _Bool isPerDeviceVPP; // @synthesize isPerDeviceVPP=_isPerDeviceVPP;
@property(copy, nonatomic) NSNumber *downloadRestoreState; // @synthesize downloadRestoreState=_downloadRestoreState;
@property(nonatomic, getter=isRestore) _Bool restore; // @synthesize restore=_restore;
@property(nonatomic, getter=isCellularAllowed) _Bool cellularAllowed; // @synthesize cellularAllowed=_cellularAllowed;
@property(retain, nonatomic) DownloadHandle *downloadHandle; // @synthesize downloadHandle=_downloadHandle;
@property(nonatomic) unsigned long long numSubtitleSelectionsToBeDownloaded; // @synthesize numSubtitleSelectionsToBeDownloaded=_numSubtitleSelectionsToBeDownloaded;
@property(nonatomic) unsigned long long numAudioSelectionsToBeDownloaded; // @synthesize numAudioSelectionsToBeDownloaded=_numAudioSelectionsToBeDownloaded;
@property(copy, nonatomic) NSURLRequest *URLRequest; // @synthesize URLRequest=_URLRequest;
@property(nonatomic) double transferProgressFraction; // @synthesize transferProgressFraction=_transferProgressFraction;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) double timeoutIntervalForRequest; // @synthesize timeoutIntervalForRequest=_timeoutIntervalForRequest;
@property(nonatomic) double timeoutIntervalForResource; // @synthesize timeoutIntervalForResource=_timeoutIntervalForResource;
@property(copy, nonatomic) NSNumber *taskIdentifier; // @synthesize taskIdentifier=_taskIdentifier;
@property(nonatomic) long long taskPriority; // @synthesize taskPriority=_taskPriority;
@property(nonatomic) long long storeItemIdentifier; // @synthesize storeItemIdentifier=_storeItemIdentifier;
@property(nonatomic) long long result; // @synthesize result=_result;
@property(nonatomic) _Bool requiresPowerPluggedIn; // @synthesize requiresPowerPluggedIn=_requiresPowerPluggedIn;
@property(nonatomic) _Bool requiresDownloadHandler; // @synthesize requiresDownloadHandler=_requiresDownloadHandler;
@property(nonatomic) long long rentalIdentifier; // @synthesize rentalIdentifier;
@property(nonatomic) long long mediaAssetSize; // @synthesize mediaAssetSize=_mediaAssetSize;
@property(nonatomic) long long mediaAssetIdentifier; // @synthesize mediaAssetIdentifier=_mediaAssetIdentifier;
@property(copy, nonatomic) NSNumber *loadingPriority; // @synthesize loadingPriority=_loadingPriority;
@property(nonatomic, getter=isLegacyClient) _Bool legacyClient; // @synthesize legacyClient=_legacyClient;
@property(copy, nonatomic) NSString *kind; // @synthesize kind=_kind;
@property(nonatomic) _Bool infersDiscretionary; // @synthesize infersDiscretionary=_infersDiscretionary;
@property(nonatomic) _Bool ignoresDownloadHandler; // @synthesize ignoresDownloadHandler=_ignoresDownloadHandler;
@property(nonatomic, getter=isHLS) _Bool HLS; // @synthesize HLS=_isHLS;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) long long downloadIdentifier; // @synthesize downloadIdentifier=_downloadIdentifier;
@property(nonatomic, getter=isDiscretionary) _Bool discretionary; // @synthesize discretionary=_discretionary;
@property(retain, nonatomic) DownloadDataConsumer *dataConsumer; // @synthesize dataConsumer=_dataConsumer;
- (id);	// IMP=0x001000000016cd18
@property(copy, nonatomic) NSString *clientSecondaryIdentifier; // @synthesize clientSecondaryIdentifier=_clientSecondaryIdentifier;
@property(copy, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(nonatomic) long long bytesPerSecondLimit; // @synthesize bytesPerSecondLimit=_bytesPerSecondLimit;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(copy, nonatomic) NSArray *backgroundOperations; // @synthesize backgroundOperations=_backgroundOperations;
@property(copy, nonatomic) NSDictionary *AVAssetDownloadSessionOptions; // @synthesize AVAssetDownloadSessionOptions=_AVAssetDownloadSessionOptions;
@property(nonatomic) long long automaticType; // @synthesize automaticType=_automaticType;
- (id)_reuseExistingTaskInSession:(id)arg1;	// IMP=0x001000000016c44f
- (id)_getExistingTaskInSession:(id)arg1;	// IMP=0x001000000016bdc3
@property(readonly, nonatomic) NSString *URLSessionIdentifier;
- (id)sessionTaskWithSession:(id)arg1 error:(id *)arg2;	// IMP=0x001000000016ba66
- (id)sessionConfiguration;	// IMP=0x001000000016b891

@end

