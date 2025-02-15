//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (FezAdditions)
+ (id)generatedRoomNameForGroupChat;	// IMP=0x0020000000002f9d
+ (id)randomString;	// IMP=0x0020000000002f33
+ (id)copyStringGUIDForObject:(id)arg1;	// IMP=0x0020000000002f21
+ (id)stringGUIDForObject:(id)arg1;	// IMP=0x0020000000002f07
+ (id)stringGUID;	// IMP=0x0020000000002eed
+ (id)copyStringGUID;	// IMP=0x0020000000002e87
- (_Bool)roomNameIsProbablyAutomaticallyGenerated;	// IMP=0x0010000000004a36
- (id)stringByRemovingCharactersFromSet:(id)arg1;	// IMP=0x001000000000490c
- (id)stringWithLTREmbedding;	// IMP=0x00100000000048e7
- (id)pathStringForDisplay;	// IMP=0x0010000000004842
- (id)__stringByStrippingAttachmentAndControlCharacters;	// IMP=0x00100000000047d0
- (id)__stringByStrippingControlCharacters;	// IMP=0x001000000000472f
- (id)uniqueSavePath;	// IMP=0x001000000000463b
- (id)stringByRemovingWhitespace;	// IMP=0x00100000000045d5
- (struct _NSRange)__rangeOfNewlineInRange:(struct _NSRange)arg1;	// IMP=0x001000000000455a
- (id)stringByResolvingAndStandardizingPath;	// IMP=0x001000000000443a
- (_Bool)_appearsToBeSIPID;	// IMP=0x0010000000004421
- (_Bool)_appearsToBeHardwareID;	// IMP=0x0010000000004408
- (_Bool)_appearsToBePseudonymID;	// IMP=0x00100000000043ef
- (_Bool)_appearsToBeTemporaryID;	// IMP=0x00100000000043d6
- (_Bool)_appearsToBeBusinessID;	// IMP=0x0010000000004365
- (_Bool)_appearsToBeDSID;	// IMP=0x001000000000430b
- (_Bool)_appearsToBePhoneNumber;	// IMP=0x0010000000004301
- (id)_md5Hash;	// IMP=0x0010000000004064
- (id)_stripPotentialTokenURIWithToken:(id *)arg1;	// IMP=0x0010000000003f16
- (_Bool)_appearsToBeEmail;	// IMP=0x0010000000003f0c
- (id)_IDFromFZIDType:(long long)arg1;	// IMP=0x0010000000003e65
- (id)_URIFromFZIDType:(long long)arg1;	// IMP=0x0010000000003e2a
- (id)_URIFromCanonicalizedFZIDType:(long long)arg1;	// IMP=0x0010000000003def
- (long long)_FZBestGuessFZIDType;	// IMP=0x0010000000003d03
- (id)_im_normalizedURIString;	// IMP=0x0010000000003ca4
- (id)_bestGuessURIFromCanicalizedID;	// IMP=0x0010000000003c73
- (id)_URIFromCanonicalizedSIPID;	// IMP=0x0010000000003c61
- (id)_URIFromCanonicalizedHardwareID;	// IMP=0x0010000000003c4f
- (id)_URIFromCanonicalizedPseudonymID;	// IMP=0x0010000000003c3d
- (id)_URIFromCanonicalizedTemporaryID;	// IMP=0x0010000000003c2b
- (id)_URIFromCanonicalizedBusinessID;	// IMP=0x0010000000003c19
- (id)_URIFromCanonicalizedDSID;	// IMP=0x0010000000003bfd
- (id)_URIFromCanonicalizedPhoneNumber;	// IMP=0x0010000000003be1
- (id)_URIFromCanonicalizedEmail;	// IMP=0x0010000000003bc5
- (id)_bestGuessURI;	// IMP=0x0010000000003b94
- (id)_URIFromSIPID;	// IMP=0x0010000000003b3b
- (id)_URIFromHardwareID;	// IMP=0x0010000000003ae2
- (id)_URIFromPseudonymID;	// IMP=0x0010000000003a89
- (id)_URIFromTemporaryID;	// IMP=0x0010000000003a30
- (id)_URIFromBusinessID;	// IMP=0x0010000000003966
- (id)_URIFromDSID;	// IMP=0x00100000000038cf
- (id)_URIFromPhoneNumber;	// IMP=0x0010000000003870
- (id)_URIFromEmail;	// IMP=0x0010000000003804
- (long long)_FZIDType;	// IMP=0x0010000000003641
- (id)_FZIDFromPhoneNumber;	// IMP=0x00100000000035e2
- (id)_FZIDFromEmail;	// IMP=0x00100000000035bd
- (id)_stripFZIDPrefix;	// IMP=0x001000000000348c
- (id)urlFromString;	// IMP=0x0010000000003346
- (id)stringByAddingURLEscapes;	// IMP=0x00100000000032e0
- (id)stringByRemovingURLEscapes;	// IMP=0x00100000000032c2
- (id)trimmedString;	// IMP=0x0010000000003296
- (long long)localizedCompareToString:(id)arg1;	// IMP=0x00100000000031fc
- (unsigned int)unsignedIntValue;	// IMP=0x00100000000031b8
- (unsigned int)hexValue;	// IMP=0x00100000000030c6
- (_Bool)isDirectory;	// IMP=0x001000000000305d
- (_Bool)isEqualToIgnoringCase:(id)arg1;	// IMP=0x001000000000303c
- (id)_imInitWithFormat:(id)arg1 arguments:(struct __va_list_tag [1])arg2;	// IMP=0x00100000000114dc
@property(readonly, nonatomic) NSString *stripMobileMSuffixIfPresent;
@property(readonly, nonatomic) _Bool hasMobileMeSuffix;
@property(readonly, nonatomic) NSString *mobileMeDomain;
@end

