//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SFMediaMetadata;

@interface SearchUIMusicUtilities : NSObject
{
}

+ (void)canPlayAppleMusicWithCompletionHandler:(void (^)(_Bool, NSError *))arg1;	// IMP=0x00800000000ba540
+ (void)playMusicItemWithMediaMetadata:(SFMediaMetadata *)arg1 completionHandler:(void (^)(NSError *))arg2;	// IMP=0x00800000000b9f60
- (id)init;	// IMP=0x00000000000ba960

@end

