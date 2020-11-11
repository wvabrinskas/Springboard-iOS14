/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PreferenceBundles/WirelessModemSettings.bundle/WirelessModemSettings
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface HotspotFamilyMember : NSObject {

	int _shareOption;
	NSString* _altDSID;
	NSString* _displayName;

}

@property (nonatomic,retain) NSString * altDSID;                  //@synthesize altDSID=_altDSID - In the implementation block
@property (nonatomic,retain) NSString * displayName;              //@synthesize displayName=_displayName - In the implementation block
@property (assign,nonatomic) int shareOption;                     //@synthesize shareOption=_shareOption - In the implementation block
-(void)setDisplayName:(NSString *)arg1 ;
-(id)init;
-(NSString *)altDSID;
-(void)setAltDSID:(NSString *)arg1 ;
-(NSString *)displayName;
-(void)setShareOption:(int)arg1 ;
-(id)initWithAltDSID:(id)arg1 displayName:(id)arg2 shareOption:(int)arg3 ;
-(int)shareOption;
@end
