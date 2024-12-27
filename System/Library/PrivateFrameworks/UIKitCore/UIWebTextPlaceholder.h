//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UITextPlaceholder.h"

@class DOMElement, UIWebDocumentView;

__attribute__((visibility("hidden")))
@interface UIWebTextPlaceholder : UITextPlaceholder
{
    UIWebDocumentView *_webDocumentView;	// 8 = 0x8
    DOMElement *_element;	// 16 = 0x10
}

+ (id)placeholderWithWebDocumentView:(id)arg1;	// IMP=0x006000000174a5c3
@property(retain, nonatomic) DOMElement *element; // @synthesize element=_element;
- (id)rects;	// IMP=0x000000000174a63b
- (void)dealloc;	// IMP=0x000000000174a5ea

@end

