//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSFileSecurity.h"

__attribute__((visibility("hidden")))
@interface __NSFileSecurity : NSFileSecurity
{
    struct _filesec *_filesec;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000001737f9
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000017356c
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x0010000000173569
+ (id)__new:(struct _filesec *)arg1;	// IMP=0x00100000001727e1
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001737f6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000173580
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001734f4
- (id)description;	// IMP=0x00000000001731a1
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000172e76
- (unsigned long long)hash;	// IMP=0x0000000000172d64
- (void)dealloc;	// IMP=0x0000000000172cfb
- (_Bool)clearProperties:(unsigned long long)arg1;	// IMP=0x0000000000172c03
- (_Bool)setAccessControlList:(struct _acl *)arg1;	// IMP=0x0000000000172ba2
- (_Bool)copyAccessControlList:(struct _acl **)arg1;	// IMP=0x0000000000172b23
- (_Bool)setGroupUUID:(unsigned char [16])arg1;	// IMP=0x0000000000172b03
- (_Bool)getGroupUUID:(unsigned char (*)[16])arg1;	// IMP=0x0000000000172aa4
- (_Bool)setOwnerUUID:(unsigned char [16])arg1;	// IMP=0x0000000000172a84
- (_Bool)getOwnerUUID:(unsigned char (*)[16])arg1;	// IMP=0x0000000000172a25
- (_Bool)setMode:(unsigned short)arg1;	// IMP=0x00000000001729d0
- (_Bool)getMode:(unsigned short *)arg1;	// IMP=0x0000000000172971
- (_Bool)setGroup:(unsigned int)arg1;	// IMP=0x000000000017291d
- (_Bool)getGroup:(unsigned int *)arg1;	// IMP=0x00000000001728c0
- (_Bool)setOwner:(unsigned int)arg1;	// IMP=0x000000000017286c
- (_Bool)getOwner:(unsigned int *)arg1;	// IMP=0x000000000017280f
- (struct _filesec *)_filesec;	// IMP=0x0000000000172803

@end

