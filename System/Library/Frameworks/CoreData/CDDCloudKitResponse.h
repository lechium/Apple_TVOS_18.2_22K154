//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CDDCloudKitMessage, NSError;

__attribute__((visibility("hidden")))
@interface CDDCloudKitResponse : NSObject
{
    _Bool _success;	// 8 = 0x8
    CDDCloudKitMessage *_message;	// 16 = 0x10
    NSError *_error;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000001a00f7
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001a01b7
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001a00ff
- (void)dealloc;	// IMP=0x00000000001a00a5

@end

