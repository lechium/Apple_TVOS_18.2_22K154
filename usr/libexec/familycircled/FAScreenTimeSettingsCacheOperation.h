//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface FAScreenTimeSettingsCacheOperation : NSObject
{
    NSNumber *_dsid;	// 8 = 0x8
}

+ (id)cacheQueue;	// IMP=0x00400000000082d7
- (void).cxx_destruct;	// IMP=0x00200000000094dc
@property(retain, nonatomic) NSNumber *dsid; // @synthesize dsid=_dsid;
- (id)_onQueue:(CDUnknownBlockType)arg1;	// IMP=0x00100000000092a7
- (id)_createCacheFile;	// IMP=0x0010000000009026
- (id)_cacheURL;	// IMP=0x0010000000008f32
- (id)_fetchData:(id *)arg1;	// IMP=0x0010000000008cc1
- (id)_cacheURLWithError:(id *)arg1;	// IMP=0x0010000000008a8f
- (id)invalidate;	// IMP=0x001000000000887a
- (id)loadScreenTimeSettingsObject;	// IMP=0x00100000000085f4
- (id)cacheScreenTimeSettingsObject:(id)arg1;	// IMP=0x0010000000008358
- (id)initWithDSID:(id)arg1;	// IMP=0x001000000000826c

@end

