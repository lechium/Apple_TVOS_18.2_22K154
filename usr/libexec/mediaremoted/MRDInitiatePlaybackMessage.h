//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface MRDInitiatePlaybackMessage : NSObject
{
    NSString *_bundleID;	// 8 = 0x8
    NSData *_indexPathData;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000018d8a2
@property(readonly, nonatomic) NSData *indexPathData; // @synthesize indexPathData=_indexPathData;
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (id)initWithBundleID:(id)arg1 indexPathData:(id)arg2;	// IMP=0x001000000018d7d5

@end

