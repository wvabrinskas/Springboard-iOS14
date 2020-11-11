/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class BCSConfigItem, NSURL;

@interface BCSMegashard : NSObject {

	BCSConfigItem* _configItem;
	NSURL* _bloomFilterURL;

}

@property (nonatomic,retain) BCSConfigItem * configItem;              //@synthesize configItem=_configItem - In the implementation block
@property (nonatomic,retain) NSURL * bloomFilterURL;                  //@synthesize bloomFilterURL=_bloomFilterURL - In the implementation block
-(id)initWithRecord:(id)arg1 type:(long long)arg2 ;
-(void)setConfigItem:(BCSConfigItem *)arg1 ;
-(void)setBloomFilterURL:(NSURL *)arg1 ;
-(BCSConfigItem *)configItem;
-(NSURL *)bloomFilterURL;
@end
