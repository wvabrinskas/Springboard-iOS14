/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/MTLModel.h>
#import <libobjc.A.dylib/MTLJSONSerializing.h>

@class NSNumber, NSString, NSURL, NSDictionary;

@interface WFWordPressFile : MTLModel <MTLJSONSerializing> {

	NSNumber* _fileId;
	NSString* _filename;
	NSURL* _url;
	NSString* _type;

}

@property (nonatomic,copy,readonly) NSNumber * fileId;                           //@synthesize fileId=_fileId - In the implementation block
@property (nonatomic,copy,readonly) NSString * filename;                         //@synthesize filename=_filename - In the implementation block
@property (nonatomic,copy,readonly) NSURL * url;                                 //@synthesize url=_url - In the implementation block
@property (nonatomic,copy,readonly) NSString * type;                             //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)JSONKeyPathsByPropertyKey;
+(id)fileIdJSONTransformer;
-(NSURL *)url;
-(NSString *)filename;
-(NSString *)type;
-(NSNumber *)fileId;
@end

