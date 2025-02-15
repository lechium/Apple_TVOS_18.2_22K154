//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class NSNumber;

@interface LoadPassbookPassOperation : ISOperation
{
    NSNumber *_accountID;	// 96 = 0x60
    CDUnknownBlockType _outputBlock;	// 104 = 0x68
}

- (void)run;	// IMP=0x00200000000ec5c5
@property(copy) CDUnknownBlockType outputBlock;
@property(readonly) NSNumber *accountIdentifier;
- (void)dealloc;	// IMP=0x00100000000ec49d
- (id)initWithAccountIdentifier:(id)arg1;	// IMP=0x00100000000ec43f

@end

