//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MCPeerIDInternal : NSObject
{
    NSString *_idString;	// 8 = 0x8
    unsigned long long _pid64;	// 16 = 0x10
    NSString *_displayName;	// 24 = 0x18
}

@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) unsigned long long pid64; // @synthesize pid64=_pid64;
@property(readonly, nonatomic) NSString *idString; // @synthesize idString=_idString;
- (void)dealloc;	// IMP=0x0000000000032e13
- (id)initWithIDString:(id)arg1 pid64:(unsigned long long)arg2 displayName:(id)arg3;	// IMP=0x0000000000032d92

@end

