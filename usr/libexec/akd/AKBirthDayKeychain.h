//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AAFKeychainManager;

@interface AKBirthDayKeychain : NSObject
{
    AAFKeychainManager *_keychainManager;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000bd4a2
@property(retain, nonatomic) AAFKeychainManager *keychainManager; // @synthesize keychainManager=_keychainManager;
- (id)_birthDayKeychainDescriptorForAltDSID:(id)arg1;	// IMP=0x00100000000bd38e
- (_Bool)deleteBirthdayForAltDSID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000bd2f7
- (_Bool)updateBirthdayForAltDSID:(id)arg1 userInformation:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000bcec1
- (id)fetchBirthDayForAltDSID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000bcce0
- (id)init;	// IMP=0x00100000000bcc8a

@end

