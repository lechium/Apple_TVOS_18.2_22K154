//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSDPauseDigits, NSMutableArray, NSString;
@protocol CSDPauseDigitsQueueDelegate;

@interface CSDPauseDigitsQueue : NSObject
{
    id <CSDPauseDigitsQueueDelegate> _delegate;	// 8 = 0x8
    NSString *_baseDestinationID;	// 16 = 0x10
    NSString *_originalPauseDigitsString;	// 24 = 0x18
    NSMutableArray *_pauseDigits;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000bed94
@property(retain, nonatomic) NSMutableArray *pauseDigits; // @synthesize pauseDigits=_pauseDigits;
@property(copy, nonatomic) NSString *originalPauseDigitsString; // @synthesize originalPauseDigitsString=_originalPauseDigitsString;
@property(copy, nonatomic) NSString *baseDestinationID; // @synthesize baseDestinationID=_baseDestinationID;
@property(nonatomic) __weak id <CSDPauseDigitsQueueDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_parsePauseDigitsFromDestinationID:(id)arg1;	// IMP=0x00100000000be983
- (id)dequeueAllPauseDigits;	// IMP=0x00100000000be885
- (id)dequeueNextPauseDigits;	// IMP=0x00100000000be7d8
@property(readonly, nonatomic) _Bool hasQueuedHardPauseDigits;
@property(readonly, nonatomic) CSDPauseDigits *nextPauseDigits;
- (id)description;	// IMP=0x00100000000be4e7
- (id)initWithDestinationID:(id)arg1;	// IMP=0x00100000000be450
- (id)init;	// IMP=0x00100000000be3c6

@end

