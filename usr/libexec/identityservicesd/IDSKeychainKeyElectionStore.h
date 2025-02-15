//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSKeychainWrapper;

@interface IDSKeychainKeyElectionStore : NSObject
{
    IDSKeychainWrapper *_keychainWrapper;	// 8 = 0x8
}

+ (_Bool);	// IMP=0x004000000010fefd
- (void).cxx_destruct;	// IMP=0x0020000000110fbb
@property(readonly, nonatomic) IDSKeychainWrapper *keychainWrapper; // @synthesize keychainWrapper=_keychainWrapper;
- (id)_fullClusterFromData:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000110ebd
- (id)_keychainEntryForCluster:(id)arg1;	// IMP=0x0010000000110d81
- (_Bool)removeFullClusterWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000110bc5
- (void)_storeData:(id)arg1 forIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000110b22
- (void)storeFullCluster:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000110638
- (id)fetchFullClusterWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001100e4
- (id)initWithKeychainWrapper:(id)arg1;	// IMP=0x0010000000110079
- (id)identifierForFullCluster:(id)arg1;	// IMP=0x001000000010ff16

@end

