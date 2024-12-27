//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSPairedDeviceKeychainSchema, NSString;

@interface IDSPairedDeviceKeychainPersister : NSObject
{
    IDSPairedDeviceKeychainSchema *_keychainSchema;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000454436
- (_Bool)_removeFromKeychain;	// IMP=0x0010000000454357
- (_Bool)_saveToKeychainWithDictionary:(id)arg1;	// IMP=0x00100000004542a7
- (id)_pairedDevicesFromPropertyDictionaries:(id)arg1;	// IMP=0x00100000004540ce
- (_Bool)savePairedDevices:(id)arg1;	// IMP=0x0010000000454036
- (id)loadPairedDevices;	// IMP=0x0010000000453de1
- (id)init;	// IMP=0x0010000000453d8b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

