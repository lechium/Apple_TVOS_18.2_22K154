//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface GDNullEventReporter : NSObject
{
}

- (id)init;	// IMP=0x0000000000005e20
- (_Bool)streamDeletionWithStreamIdentifier:(id)arg1 account:(id)arg2 remoteName:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000005df0
- (_Bool)streamPrunedWithStreamIdentifier:(id)arg1 account:(id)arg2 remoteName:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000005cd0
- (_Bool)streamUpdatedWithStreamIdentifier:(id)arg1 account:(id)arg2 remoteName:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000005c90
- (_Bool)streamDeletionWithStreamIdentifier:(id)arg1 remoteName:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000005c50
- (_Bool)streamPrunedWithStreamIdentifier:(id)arg1 remoteName:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000005b40
- (_Bool)streamUpdatedWithStreamIdentifier:(id)arg1 remoteName:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000005b00

@end

