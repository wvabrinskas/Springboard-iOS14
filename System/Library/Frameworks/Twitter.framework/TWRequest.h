/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:16 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Twitter.framework/Twitter
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class ACAccount, NSURL, NSDictionary;

@interface TWRequest : NSObject

@property (nonatomic,retain) ACAccount * account; 
@property (nonatomic,readonly) long long requestMethod; 
@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,readonly) NSDictionary * parameters; 
-(NSDictionary *)parameters;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(void)performRequestWithHandler:(/*^block*/id)arg1 ;
-(long long)requestMethod;
-(NSURL *)URL;
-(void)dealloc;
-(void)addMultiPartData:(id)arg1 withName:(id)arg2 type:(id)arg3 ;
-(id)initWithURL:(id)arg1 parameters:(id)arg2 requestMethod:(long long)arg3 ;
-(id)signedURLRequest;
@end
