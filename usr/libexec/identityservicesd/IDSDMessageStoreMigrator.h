//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IDSDMessageStoreMigrator : NSObject
{
}

+ (id)sharedInstance;	// IMP=0x00400000002fe146
- (void)_checkAndUpdateDBIfRequiredForClass:(unsigned int)arg1;	// IMP=0x00400000002fe256
- (void)migrateClassD;	// IMP=0x00100000002fe23f
- (void)migrateClassC;	// IMP=0x00100000002fe22b
- (void)migrateClassA;	// IMP=0x00100000002fe214
- (id)init;	// IMP=0x00100000002fe19b

@end

