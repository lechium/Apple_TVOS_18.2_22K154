//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKTouchContact, NSMutableArray;

@interface BKTouchContactSet : NSObject
{
    NSMutableArray *_contacts;	// 8 = 0x8
    BKTouchContact *_unsafeIndexedContacts[30];	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000004a1df
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x001000000004a1c9
- (id)copy;	// IMP=0x001000000004a173
- (long long)count;	// IMP=0x001000000004a15d
- (id)description;	// IMP=0x001000000004a13d
- (id)init;	// IMP=0x001000000004a0e7

@end

