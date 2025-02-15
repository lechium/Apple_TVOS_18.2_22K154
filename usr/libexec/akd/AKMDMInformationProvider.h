//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface AKMDMInformationProvider : NSObject
{
}

- (id)_fetchMDMInformationFromDeviceManagementClient;	// IMP=0x0040000000095e92
- (_Bool)_shouldGetMDMInformationForAccount:(id)arg1 accountManager:(id)arg2;	// IMP=0x0010000000095e3b
- (_Bool)_shouldGetMDMInformationForAuthContext:(id)arg1;	// IMP=0x0010000000095de4
- (id)fetchMDMInformationIfNecessaryForAccount:(id)arg1 accountManager:(id)arg2;	// IMP=0x0010000000095ddc
- (id)fetchMDMInformationIfNecessaryForAuthContext:(id)arg1;	// IMP=0x0010000000095dd4

@end

