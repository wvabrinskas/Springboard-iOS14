/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSNumber, NSString, NSDictionary;

@interface ASTTestAttributes : NSObject {

	NSNumber* _testId;
	NSString* _version;

}

@property (nonatomic,readonly) NSDictionary * dictionary; 
@property (nonatomic,retain) NSNumber * testId;                        //@synthesize testId=_testId - In the implementation block
@property (nonatomic,retain) NSString * version;                       //@synthesize version=_version - In the implementation block
+(id)attributesWithTestId:(id)arg1 version:(id)arg2 ;
-(void)setVersion:(NSString *)arg1 ;
-(id)init;
-(NSString *)version;
-(NSDictionary *)dictionary;
-(NSNumber *)testId;
-(id)description;
-(id)initWithTestId:(id)arg1 version:(id)arg2 ;
-(void)setTestId:(NSNumber *)arg1 ;
@end

