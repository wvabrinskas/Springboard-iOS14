/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iCloudQuota.framework/iCloudQuota
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, ICQLink, NSString;

@interface _ICQButtonSpecification : NSObject {

	NSDictionary* _serverDict;
	ICQLink* _buttonLink;
	NSString* _buttonFormat;
	NSString* _textFormat;
	NSString* _linkFormat;
	NSDictionary* _linkForBundleIdentifier;

}

@property (nonatomic,readonly) NSString * buttonFormat;                           //@synthesize buttonFormat=_buttonFormat - In the implementation block
@property (nonatomic,readonly) ICQLink * buttonLink; 
@property (nonatomic,readonly) NSString * textFormat;                             //@synthesize textFormat=_textFormat - In the implementation block
@property (nonatomic,readonly) NSString * linkFormat;                             //@synthesize linkFormat=_linkFormat - In the implementation block
@property (nonatomic,retain) NSDictionary * linkForBundleIdentifier;              //@synthesize linkForBundleIdentifier=_linkForBundleIdentifier - In the implementation block
+(id)buttonSpecificationSampleForLevel:(long long)arg1 ;
-(id)initWithServerDictionary:(id)arg1 ;
-(ICQLink *)buttonLink;
-(id)linkForBundleIdentifier:(id)arg1 ;
-(NSDictionary *)linkForBundleIdentifier;
-(NSString *)buttonFormat;
-(NSString *)textFormat;
-(NSString *)linkFormat;
-(void)setLinkForBundleIdentifier:(NSDictionary *)arg1 ;
@end

