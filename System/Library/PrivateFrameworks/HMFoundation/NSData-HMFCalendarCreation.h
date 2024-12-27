//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@class NSArray, NSString;

@interface NSData (HMFCalendarCreation)
+ (id)shortDescription;	// IMP=0x001000000002aacc
- (id)decodeCalendar;	// IMP=0x001000000002486d
- (id)decodeArrayOfDateComponents;	// IMP=0x00100000000247c9
- (id)decodeDateComponents;	// IMP=0x00100000000247ab
- (id)hmf_zeroingCopy;	// IMP=0x001000000002989a
@property(readonly) NSString *hmf_hexadecimalRepresentation;
- (id)hmf_hexadecimalStringWithOptions:(unsigned long long)arg1;	// IMP=0x001000000002b076
- (id)hmf_initWithHexadecimalString:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x001000000002ae36
@property(readonly, getter=hmf_isZeroed) _Bool hmf_zeroed;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
- (id)decodeTimeZone;	// IMP=0x001000000004ebff

// Remaining properties
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSArray",?,R,C,N

@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *propertyDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) Class superclass;
@end

