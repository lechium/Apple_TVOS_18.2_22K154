//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface UPDProfileStoreClientRecord : NSObject
{
    _Bool _readProfiles;	// 8 = 0x8
    _Bool _writeProfiles;	// 9 = 0x9
}

@property(readonly, nonatomic) _Bool writeProfiles; // @synthesize writeProfiles=_writeProfiles;
@property(readonly, nonatomic) _Bool readProfiles; // @synthesize readProfiles=_readProfiles;
@property(readonly, nonatomic, getter=isEntitled) _Bool entitled;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002f106
- (id)initWithAuditToken:(id)arg1;	// IMP=0x000000000002f06a

@end

