/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSObject;


@protocol BCSItemIdentifying <NSObject>
@property (nonatomic,readonly) NSObject * itemIdentifier; 
@property (nonatomic,readonly) long long truncatedHash; 
@property (nonatomic,readonly) long long type; 
@required
-(NSObject *)itemIdentifier;
-(long long)type;
-(long long)truncatedHash;
-(BOOL)matchesItemIdentifying:(id)arg1;

@end

