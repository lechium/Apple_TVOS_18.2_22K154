//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VSCredentialEntryPickerItem : NSObject
{
    NSString *_itemName;	// 8 = 0x8
    NSString *_itemValue;	// 16 = 0x10
    NSString *_itemId;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000056c46
@property(copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(copy, nonatomic) NSString *itemValue; // @synthesize itemValue=_itemValue;
@property(copy, nonatomic) NSString *itemName; // @synthesize itemName=_itemName;

@end

