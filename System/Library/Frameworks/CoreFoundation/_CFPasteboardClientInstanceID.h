//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_xpc_object;

__attribute__((visibility("hidden")))
@interface _CFPasteboardClientInstanceID : NSObject
{
    struct __CFUUID *_uuid;	// 8 = 0x8
    NSObject<OS_xpc_object> *_conn;	// 16 = 0x10
}

@property(readonly) NSObject<OS_xpc_object> *connection; // @synthesize connection=_conn;
@property(readonly) struct __CFUUID *uuid; // @synthesize uuid=_uuid;
- (id)description;	// IMP=0x000000000010ee5c
- (void)dealloc;	// IMP=0x000000000010edf6
- (id)initWithConnection:(id)arg1;	// IMP=0x000000000010ed71

@end

