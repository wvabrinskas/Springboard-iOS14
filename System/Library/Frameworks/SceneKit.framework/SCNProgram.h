/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:13 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SceneKit/SceneKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSMutableDictionary;

@interface SCNProgram : NSObject <NSCopying, NSSecureCoding> {

	NSString* _vertexShader;
	NSString* _fragmentShader;
	NSString* _vertexFunctionName;
	NSString* _fragmentFunctionName;
	NSString* _name;
	NSString* _sourceFile;
	NSMutableDictionary* _semanticInfos;
	BOOL _opaque;
	id _library;
	id _delegate;
	NSMutableDictionary* _bufferBindings;

}

@property (nonatomic,copy) NSString * vertexShader; 
@property (nonatomic,copy) NSString * fragmentShader; 
@property (nonatomic,copy) NSString * vertexFunctionName; 
@property (nonatomic,copy) NSString * fragmentFunctionName; 
@property (assign,getter=isOpaque,nonatomic) BOOL opaque; 
@property (assign,nonatomic) id<SCNProgramDelegate> delegate; 
@property (nonatomic,retain) id<MTLLibrary> library; 
+(BOOL)supportsSecureCoding;
+(id)program;
+(id)programWithLibrary:(id)arg1 ;
-(id)init;
-(void)setOpaque:(BOOL)arg1 ;
-(id<SCNProgramDelegate>)delegate;
-(void)encodeWithCoder:(id)arg1 ;
-(id<MTLLibrary>)library;
-(BOOL)isOpaque;
-(void)setLibrary:(id<MTLLibrary>)arg1 ;
-(id)name;
-(void)setDelegate:(id<SCNProgramDelegate>)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copy;
-(void)dealloc;
-(void)setName:(id)arg1 ;
-(void)setVertexShader:(NSString *)arg1 ;
-(void)setFragmentShader:(NSString *)arg1 ;
-(void)setVertexFunctionName:(NSString *)arg1 ;
-(void)setFragmentFunctionName:(NSString *)arg1 ;
-(void)handleBindingOfBufferNamed:(id)arg1 frequency:(long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)setSemantic:(id)arg1 forSymbol:(id)arg2 options:(id)arg3 ;
-(id)semanticForSymbol:(id)arg1 ;
-(NSString *)vertexShader;
-(NSString *)fragmentShader;
-(NSString *)vertexFunctionName;
-(NSString *)fragmentFunctionName;
-(void)setSemanticInfos:(id)arg1 ;
-(void)_customEncodingOfSCNProgram:(id)arg1 ;
-(void)_customDecodingOfSCNProgram:(id)arg1 ;
-(void)setSourceFile:(id)arg1 ;
-(int)shadingLanguage;
-(id)sourceFile;
-(id)_optionsForSymbol:(id)arg1 ;
-(id)_allSymbolsWithSceneKitSemantic;
-(id)_bufferBindings;
-(void)setSemantic:(id)arg1 forSymbol:(id)arg2 ;
@end
