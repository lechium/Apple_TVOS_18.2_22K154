//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSProgress;

@interface _TtC6Speech20ModelDownloadRequest : NSObject
{
    MISSING_TYPE *assetTypesPerLocale;	// 8 = 0x8
    MISSING_TYPE *clientID;	// 16 = 0x10
    MISSING_TYPE *progress;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000e9a0b
- (id)init;	// IMP=0x00000000000e99d5
- (void)downloadWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e98ff
@property(nonatomic, readonly) NSProgress *progress; // @synthesize progress;

@end

