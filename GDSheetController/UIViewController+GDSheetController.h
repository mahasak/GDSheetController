//
//  UIViewController+GDSheetController.h
//  GDSheetViewControllerDemo
//
//  Created by David Bonnet on 27/08/13.
//  Copyright (c) 2013 David Bonnet. All rights reserved.
//

/*
 Copyright (c) 2013 David Bonnet (aka iGranDav)
 
 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 */

#import <UIKit/UIKit.h>

@class GDSheetController;

/*
 * This category extends every UIViewController with a sheetController property.
 * It can be used in the same way as the navigationController property, thus
 * allowing simple access from all the relevant controllers, to enable quick and
 * easy message forwarding.
 */
@interface UIViewController (GDSheetController)

@property (nonatomic, strong, readwrite) GDSheetController *sheetController;

@end
