//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface AKApplicationInformationController : NSObject
{
}

+ (id)sharedController;	// IMP=0x00400000000d34a0
- (id)_buildApplicationMetadataServiceForAltDSID:(id)arg1 client:(id)arg2;	// IMP=0x00400000000d3c7c
- (id)_buildApplicationAuthorizationController;	// IMP=0x00100000000d3c63
- (void)fetchPrimaryApplicationInformationForAltDSID:(id)arg1 appInformation:(id)arg2 client:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000d3955
- (void)fetchAppInformationWithAltDSID:(id)arg1 client:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000d3525

@end

